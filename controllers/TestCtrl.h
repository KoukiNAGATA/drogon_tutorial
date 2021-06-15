#pragma once //! インクルードガード ... ヘッダーファイルが重複してインクルードされるのを避けるためのもの
#include <drogon/HttpSimpleController.h>
using namespace drogon;
class TestCtrl : public HttpSimpleController<TestCtrl>
{
public:
  virtual void asyncHandleHttpRequest(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback) override;

  // ここから下はルーティング
  // 以下のパスとメソッドにおいて、TestCtrlコントローラに投げる、という意味
  PATH_LIST_BEGIN

  PATH_ADD("/", Get, Post); // ルーティング
  PATH_ADD("/test", Get);   // ルーティング

  PATH_LIST_END
};