//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class ErrorReportInfo;

@interface WCFinderLiveClientReportCGI : NSObject
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    ErrorReportInfo *_error;
    unsigned long long _reportScene;
}

@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(copy, nonatomic) ErrorReportInfo *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithError:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end
