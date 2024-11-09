#include"../../Scene/SceneBase/SceneBase.h"
#include"../../Scene/Title/Title.h"
#include"../../GameSystem/GameManager/GameManager.h"

#include"../../Object/GameObjectManager/GameObjectManager.h"
#include"../../Object/GameObject/CleaningObjectTag.h"

//#include "../../Object/Play/Player/Player.h"
//#include"../../Object/Play/Stage/Stage.h"
//#include"../../Object/Play/Ui/PlayUi.h"
//#include"../../Object/Play/MapObject/MapObject.h"

namespace rc
{
    /// <summary>
    /// ゲームパートの進行管理クラス
    /// </summary>
    class Cleaning :public SceneBase
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        Cleaning();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~Cleaning();
    private:

        /// <summary>
        /// シーン更新処理
        /// </summary>
        /// <param name="deltaTime">デルタタイム</param>
        /// <returns>次のフレームシーン</returns>
        SceneBase* Update(const float deltaTime)override;

        /// <summary>
        /// シーン更新処理
        /// </summary>
        void Draw()override;
    };
}