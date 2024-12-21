#pragma once


namespace rc
{
    inline namespace vital
    {
        class VitalManager final
        {
        public:
            //スタミナから作業効率を計算　制作展時点では同じ数値で　後で計算式つくる
            void CalculatePerformance();
            
            //一日終了で増減　スタミナ+30　作業効率+30
            void CalculateDayLast();
            
            
            /// <summary>
            /// スタミナゲッター
            /// </summary>
            void GetStamina();
            /// <summary>
            /// 作業効率ゲッター
            /// </summary>
            void GetPerformance();



        private:
            

        };
    }
}