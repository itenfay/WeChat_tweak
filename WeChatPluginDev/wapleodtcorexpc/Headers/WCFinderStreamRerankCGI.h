//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, WCFinderLocationInfo;

@interface WCFinderStreamRerankCGI
{
    int _commentScene;
    NSArray *_feedArray;
    WCFinderLocationInfo *_locationInfo;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCFinderLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSArray *feedArray; // @synthesize feedArray=_feedArray;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithFeedInfoArray:(id)arg1 commentScene:(int)arg2 lastBuffer:(id)arg3 location:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

