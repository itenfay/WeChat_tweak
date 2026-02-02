//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WXChannelOpenFeedReq
{
    _Bool _notGetReleatedList;
    NSString *_feedID;
    NSString *_nonceID;
}

+ (id)object;
- (void).cxx_destruct;
@property(nonatomic) _Bool notGetReleatedList; // @synthesize notGetReleatedList=_notGetReleatedList;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;

@end

