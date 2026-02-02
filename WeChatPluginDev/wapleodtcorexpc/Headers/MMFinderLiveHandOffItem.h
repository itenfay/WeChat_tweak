//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveHandOffItem
{
    NSString *_icon;
    NSString *_feedObjectId;
    NSString *_feedNonceId;
    NSString *_feedLiveId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *feedLiveId; // @synthesize feedLiveId=_feedLiveId;
@property(copy, nonatomic) NSString *feedNonceId; // @synthesize feedNonceId=_feedNonceId;
@property(copy, nonatomic) NSString *feedObjectId; // @synthesize feedObjectId=_feedObjectId;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

