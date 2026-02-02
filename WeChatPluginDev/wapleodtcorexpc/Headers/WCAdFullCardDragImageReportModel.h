//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCAdFullCardDragImageReportModel
{
    unsigned int _dragCount;
    unsigned int _jumpCount;
    unsigned long long _dragDuration;
    unsigned long long _firstPlaybackTime;
}

@property(nonatomic) unsigned long long firstPlaybackTime; // @synthesize firstPlaybackTime=_firstPlaybackTime;
@property(nonatomic) unsigned int jumpCount; // @synthesize jumpCount=_jumpCount;
@property(nonatomic) unsigned int dragCount; // @synthesize dragCount=_dragCount;
@property(nonatomic) unsigned long long dragDuration; // @synthesize dragDuration=_dragDuration;

@end

