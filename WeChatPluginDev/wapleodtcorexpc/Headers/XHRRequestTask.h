//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;
@protocol WKURLSchemeTask, XHRRequestTaskDelegate;

@interface XHRRequestTask : NSObject
{
    _Bool _finished;
    _Bool _async;
    _Bool _stopped;
    id <XHRRequestTaskDelegate> _delegate;
    id <WKURLSchemeTask> _task;
    CDUnknownBlockType _iOS16StringFixBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType iOS16StringFixBlock; // @synthesize iOS16StringFixBlock=_iOS16StringFixBlock;
@property(nonatomic) _Bool stopped; // @synthesize stopped=_stopped;
@property(nonatomic) _Bool async; // @synthesize async=_async;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) id <WKURLSchemeTask> task; // @synthesize task=_task;
@property(nonatomic) __weak id <XHRRequestTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)responseWith:(id)arg1 apiResult:(id)arg2 data:(id)arg3 mime:(id)arg4;
- (void)responseWith:(id)arg1 data:(id)arg2 mime:(id)arg3 customHeaders:(id)arg4;
@property(readonly, nonatomic) int workerId;
@property(readonly, nonatomic) NSDictionary *headerFields;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSString *path;
- (id)initWith:(id)arg1;

@end

