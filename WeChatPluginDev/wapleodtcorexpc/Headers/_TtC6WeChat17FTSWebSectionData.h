//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSString;

@interface _TtC6WeChat17FTSWebSectionData
{
    MISSING_TYPE *searchID;
    MISSING_TYPE *position;
    MISSING_TYPE *enabledSugCountLimitedByServer;
    MISSING_TYPE *expiredForPrePositionSug;
    MISSING_TYPE *isFromVoice;
}

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2 searchItemCount:(long long)arg3;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic) _Bool isFromVoice; // @synthesize isFromVoice;
@property(nonatomic) _Bool expiredForPrePositionSug; // @synthesize expiredForPrePositionSug;
@property(nonatomic) _Bool enabledSugCountLimitedByServer; // @synthesize enabledSugCountLimitedByServer;
@property(nonatomic) long long position; // @synthesize position;
@property(nonatomic, copy) NSString *searchID;

@end

