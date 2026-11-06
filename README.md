# C CI Pipeline Test

C언어로 작성한 간단한 코드 및 GitHub Actions를 활용한 CI 환경 구축 실습 레포지토리

### 프로젝트 구조
```text
.
├── .github/workflows/ci.yml  # 숨김 폴더 - CI 자동화 파이프라인 설정
├── LICENSE
├── Makefile
├── README.md
└── src
    ├── calc.c                # 테스트 함수 코드
    ├── calc.h
    └── test_main.c           # assert 기반 단위 테스트
```


### 빌드 및 테스트 방법
로컬 환경(Linux)에서 Makefile을 이용해 빌드와 테스트를 진행
```bash
# 빌드 및 단위 테스트(assert) 실행
make

# 빌드 산출물(오브젝트 파일 등) 삭제
make clean
```


### CI 자동화 (GitHub Actions)
* 트리거: main 브랜치에 코드 Push 발생 시 자동 실행
* 환경: ubuntu-latest
* 동작: 소스코드 체크아웃(actions/checkout@v4) 후 make 명령어를 통한 자동 빌드 및 테스트 검증
