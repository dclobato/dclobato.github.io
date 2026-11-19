// Usado apenas na versão em PDF (mkdocs-pdf.yml): mostra o conteúdo de todas as
// abas, uma depois da outra, cada uma precedida pelo seu título.
document.addEventListener("DOMContentLoaded", function () {
  document.querySelectorAll(".tabbed-set").forEach(function (conjunto) {
    var titulos = Array.from(
      conjunto.querySelectorAll(":scope > .tabbed-labels > label")
    ).map(function (l) { return l.textContent.trim(); });
    var blocos = conjunto.querySelectorAll(":scope > .tabbed-content > .tabbed-block");
    blocos.forEach(function (bloco, i) {
      var rotulo = document.createElement("p");
      rotulo.className = "rotulo-aba";
      rotulo.textContent = titulos[i] || "";
      bloco.prepend(rotulo);
    });
    conjunto.classList.add("abas-expandidas");
  });
});
