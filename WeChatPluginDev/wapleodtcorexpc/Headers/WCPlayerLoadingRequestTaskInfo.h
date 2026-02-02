//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCPlayerLoadingRequest;

@interface WCPlayerLoadingRequestTaskInfo : NSObject
{
    int _taskSeq;
    float _downloadSec;
    WCPlayerLoadingRequest *_loadingRequest;
    struct _NSRange _dataRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(nonatomic) float downloadSec; // @synthesize downloadSec=_downloadSec;
@property(nonatomic) struct _NSRange dataRange; // @synthesize dataRange=_dataRange;
@property(nonatomic) int taskSeq; // @synthesize taskSeq=_taskSeq;
- (id)description;
- (_Bool)isEqualToLoadingRequest:(id)arg1;
- (id)initWithSeq:(int)arg1;

@end

