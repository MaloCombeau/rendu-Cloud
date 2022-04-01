Dans le Dockerfile dans /C :
- utilisation de l'image d'ubuntu avec version fixée (18.04)
- update la version
- instalation de gcc (version 8) et cmake pour pouvoir utiliser du code C
- entrypoint pour ouvrir un terminal

Dans le docket-compose :
- Obligation de mettre un networks (sinon ca ne marche pas donc j'ai pris comme dans le cours avec un /28)
- build pour le Dockerfile dans le dossier /C
- stdin_open et tty pour l'interactivité
- le volume pour avoir accès au répertoire code dans un repertoire code
- application du networks

Une fois le docker-compose up effectué, on a un environnement de travail avec la possibilité de :
- utiliser gcc pour compiler le code présentent dans le repertoire code
- faire un Cmake pour run le code
