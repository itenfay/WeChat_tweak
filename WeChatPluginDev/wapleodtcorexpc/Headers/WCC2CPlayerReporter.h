//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap;

@interface WCC2CPlayerReporter
{
    CMessageWrap *_mediaWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
- (void)customReport;
- (id)getMD5ChatName;

@end

