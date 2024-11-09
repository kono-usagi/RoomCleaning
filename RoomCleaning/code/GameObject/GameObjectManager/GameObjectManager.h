#pragma once
#include <DxLib.h>
#include <unordered_map>
#include <memory>
#include <vector>

#include"../../GameObject/GameObject/GameObject.h"
#include"../../GameObject/GameObject/CleaningObjectTag.h"
#include"../../GameObject/GameObject/TitleObjectTag.h"

class GameObject;

namespace rc
{
	class GameObjectManager final
	{
	public:
		/// <summary>
		/// デストラクタ
		/// </summary>
		~GameObjectManager();

		/// <summary>
		/// マネージャーインスタンス生成
		/// </summary>
		static void Initialize();

		/// <summary>
		/// 現在のシーンタグをセット
		/// </summary>
		static void NowSceneSet(std::vector<std::string> NowObjTag);

		/// <summary>
		/// オブジェクト登録
		/// </summary>
		/// <param name="newObj">登録するオブジェクト</param>
		static void Entry(GameObject* newObj);

		/// <summary>
		/// 全オブジェクトの削除
		/// </summary>
		static void ReleaseAllObj();

		/// <summary>
		/// 全オブジェクトの更新処理
		/// </summary>
		/// <param name="deltaTime">デルタタイム</param>
		static void Update(float deltaTime);

		/// <summary>
		/// すべてのオブジェクトの描画
		/// </summary>
		static void Draw();

		/// <summary>
		/// タグ種類の初めのオブジェクトを返す
		/// </summary>
		/// <param name="tag">オブジェクトの種類</param>
		/// <returns>最初のオブジェクト</returns>
		GameObject* GetFirstGameObj(std::string tag);

		/// <summary>
		/// ゲームオーバーか
		/// </summary>
		/// <returns></returns>
		static bool GetGameOver() { return mInstance->mGameOver; }

		/// <summary>
		/// ゲームオーバー判定セット
		/// </summary>
		/// <param name="gameOver"></param>
		static void SetGameOver(bool gameOver) { mInstance->mGameOver = gameOver; }

	private:
		GameObject* gameObject;

		/// <summary>
		/// コンストラクタ
		/// </summary>
		GameObjectManager();


		bool mGameOver = false;//ゲームオーバー判定

		static std::unique_ptr<GameObjectManager> mInstance;							    // ゲームオブジェクトマネージャの実体
		std::vector<std::string> NowScene_ObjTag;											//現在のシーンのオブジェクトタグ
		std::unordered_map<std::string, std::vector<std::shared_ptr<GameObject>>> mObjects;	//オブジェクトリスト
	};
}