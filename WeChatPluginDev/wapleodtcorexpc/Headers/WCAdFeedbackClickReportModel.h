//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCAdFeedbackClickReportModel
{
    int _buttonType;
    double _adOffSetTop;
    double _clickPosX;
    double _clickPosY;
    unsigned long long _videoPlayTime;
}

@property(nonatomic) int buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) unsigned long long videoPlayTime; // @synthesize videoPlayTime=_videoPlayTime;
@property(nonatomic) double clickPosY; // @synthesize clickPosY=_clickPosY;
@property(nonatomic) double clickPosX; // @synthesize clickPosX=_clickPosX;
@property(nonatomic) double adOffSetTop; // @synthesize adOffSetTop=_adOffSetTop;

@end

