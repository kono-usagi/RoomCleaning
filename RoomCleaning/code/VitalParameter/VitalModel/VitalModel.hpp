#ifndef _VITALMODEL_H_
#define _VITALMODEL_H_


namespace rc
{
    inline namespace vital
    {
        //Vital関連の親クラス
        class VitalModel
        {
        public:
            /// <summary>
            /// コンストラクタ
            /// </summary>
            inline VitalModel(int maxStaminaNum, int currentStaminaNum, int maxPerformanceNum, int currentPerformanceNum) {
                
            }

            /// <summary>
            /// デストラクタ
            /// </summary[>
            inline ~VitalModel() {

            }

        private:
            static const int MAX_NUM = 100;
            // 最大値　現在値　
            int mMaxStaminaNum = MAX_NUM;
            int mCurrentStaminaNum = MAX_NUM;
            int mMaxPerformanceNum = MAX_NUM;
            int mCurrentPerformanceNum = MAX_NUM;
        };
    }
}

#endif _VITALMODEL_H_
