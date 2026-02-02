//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TingAddItemsToListNotify : NSObject
{
    _Bool _notified;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property _Bool notified; // @synthesize notified=_notified;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)onPickListSuccessAlbumData:(id)arg1 error:(id *)arg2;
- (void)onAddItemsSuccessWithError:(id *)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

