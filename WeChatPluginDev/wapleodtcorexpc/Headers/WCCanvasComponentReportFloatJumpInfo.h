//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCCanvasComponentReportFloatJumpInfo
{
    unsigned int _autoJumpCount;
    unsigned int _swipeJumpCount;
}

@property(nonatomic) unsigned int swipeJumpCount; // @synthesize swipeJumpCount=_swipeJumpCount;
@property(nonatomic) unsigned int autoJumpCount; // @synthesize autoJumpCount=_autoJumpCount;
- (id)dictionaryRepresentation;

@end

