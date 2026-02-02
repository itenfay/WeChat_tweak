//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderGetBulletCommentCGI
{
    int _selectedSource;
    int _commentScene;
    NSString *_objectId;
    NSString *_objectNonceId;
    unsigned long long _startTimestamp;
    NSData *_lastBuffer;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) int selectedSource; // @synthesize selectedSource=_selectedSource;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(copy, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithObjectId:(id)arg1 objectNonceId:(id)arg2 startTimestamp:(unsigned long long)arg3 lastBuffer:(id)arg4 selectedSource:(int)arg5 commentScene:(int)arg6 successful:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end

