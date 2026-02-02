//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCMediaItem;

@interface WCSNSPlayerReporter
{
    WCMediaItem *_mediaWrap;
    NSString *_reqFlag;
    NSString *_respFlag;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *respFlag; // @synthesize respFlag=_respFlag;
@property(copy, nonatomic) NSString *reqFlag; // @synthesize reqFlag=_reqFlag;
@property(retain, nonatomic) WCMediaItem *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
- (void)customReport;
- (id)getMD5PostName;

@end

