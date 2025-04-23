# 🧠 Git & GitHub 요약 정리

---

## 🧾 Git

- 소스코드들의 **버전 관리**
- **로컬**에서 작동
- **명령어 기반** 사용
- **오픈소스/개인** 모두 사용 가능

---

## 🌐 GitHub

- Git 저장소를 관리하는 **인터넷 기반 서비스**
- **웹 UI** 제공
- **오픈소스 프로젝트** 다량 존재

---

## 🧩 한줄 요약

> `git` = 명령프롬프트 같은 곳에서 명령어로 소스코드를 관리  
> `github` = git에서 관리된 걸 클라우드에서 협업하고 보여주는 툴 (구글 Docs 느낌?)

---

## 💻 Git 명령어 정리

| 명령어 | 설명 | 예시 |
|--------|------|------|
| `init` | 저장소 초기화 | `git init` |
| `add` | 커밋 전 상태의 파일 대기소 | `git add index.html`, `git add .` |
| `commit` | 변경사항을 저장 | `git commit -m "홈페이지 제목 수정"` |
| `push` | 저장된 커밋을 GitHub로 업로드 | `git push origin main` |
| `pull` | GitHub의 변경사항을 가져옴 | `git pull origin main` |
| `stash` | 작업 내용 임시 저장 | `git stash`<br>`git stash list`<br>`git stash apply`<br>`git stash drop stash@{0}`<br>`git stash clear` |

---

## 🛠️ 이것저것 개념 정리

- **branch(브랜치)** = 원래 코드 카피본에서 따로 개발하는 공간
- **merge(병합)** = 브랜치에서 수정한 내용을 원래 코드(main)에 합치는 것
- **checkout** = 다른 브랜치로 전환하거나, 이전 커밋/파일로 되돌리는 명령어  
  → 병합 전 **main으로 이동**하는 것도 checkout!

---

## 🤝 GitHub 협업

### 🔀 Conflict (충돌)

> 여러 명이 같은 파일을 동시에 수정하면 충돌 발생

**해결 방법:**

- `merge` : 두 브랜치를 병합 후 **충돌을 수동 해결**
- `rebase` : 다른 브랜치를 기준으로 히스토리를 **깔끔하게 정리하며 병합**  
  → 커밋 히스토리를 변경하므로 협업 중에는 주의 필요!

---

### 🔁 Pull Request (PR)

> "이 브랜치의 변경사항을 메인 브랜치에 반영해 주세요!"라는 요청

**목적**  
- 코드 리뷰 요청  
- 병합 전 팀원과 논의  
- 오픈소스 기여

**PR 흐름 예시**

1. `feature/login` 브랜치에서 기능 개발 완료  
2. GitHub에서 PR 생성  
3. 팀원이 코드 리뷰 → `"Approve"`  
4. `main` 브랜치에 병합 완료!

---

## 🌿 Git Flow란?

> 브랜치를 역할별로 나누어 체계적으로 협업하는 방식

---

### 🔄 Git Flow 전체 흐름 – 예시 1

![Git Flow 다이어그램](https://example.com/git-flow-diagram.png)


**전체 흐름**
1. `feature/login`, `feature/payment`는 `develop`에서 시작  
2. 기능 완료 시 `develop`에 merge  
3. 릴리스 준비는 `release/버전` 브랜치 생성  
4. 릴리스 후 `main`, `develop`에 병합  
5. 운영 중 버그 발생 시 `hotfix` 브랜치에서 수정 후 반영

---

## 📌 브랜치별 역할 요약

| 브랜치 | 설명 |
|--------|------|
| `main` | 운영 배포용 (가장 안정적인 버전) |
| `develop` | 개발자 작업물이 모이는 브랜치 |
| `feature/*` | 새로운 기능 개발용 |
| `release/*` | 배포 전 점검 및 조정용 |
| `hotfix/*` | 운영 중 긴급 수정용 |

---