//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, FavoritesItemDataField, MultiMediaUploadBaseState, NSString;
@protocol MultiMediaUploadTaskDelegate;

@interface MultiMediaUploadTask : NSObject
{
    _Bool _isLargeFile;
    _Bool _isFromFav;
    _Bool _isStopped;
    _Bool _isHadUploadData;
    NSString *_taskIdentifier;
    CMessageWrap *_msgWrap;
    FavoritesItemDataField *_dataField;
    id <MultiMediaUploadTaskDelegate> _delegate;
    NSString *_signature;
    NSString *_fakeAeskey;
    NSString *_fakeSignature;
    MultiMediaUploadBaseState *_state;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultiMediaUploadBaseState *state; // @synthesize state=_state;
@property(nonatomic) _Bool isHadUploadData; // @synthesize isHadUploadData=_isHadUploadData;
@property(nonatomic) _Bool isStopped; // @synthesize isStopped=_isStopped;
@property(nonatomic) _Bool isFromFav; // @synthesize isFromFav=_isFromFav;
@property(retain, nonatomic) NSString *fakeSignature; // @synthesize fakeSignature=_fakeSignature;
@property(retain, nonatomic) NSString *fakeAeskey; // @synthesize fakeAeskey=_fakeAeskey;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(nonatomic) _Bool isLargeFile; // @synthesize isLargeFile=_isLargeFile;
@property(nonatomic) __weak id <MultiMediaUploadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FavoritesItemDataField *dataField; // @synthesize dataField=_dataField;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (void)onUploadTaskProcessFailType:(int)arg1;
- (void)onUploadTaskProcessSucc;
- (void)onUploadProgressChangeWithTotal:(unsigned long long)arg1 finished:(unsigned long long)arg2;
- (void)setHadUploadData;
- (_Bool)isCanCheckHitUpload;
- (id)getDataField;
- (id)getMessageWrap;
- (void)changeToState:(id)arg1;
- (id)tryGenFavDownloadDataState;
- (void)stop;
- (void)start;
- (id)initWithMsgWrap:(id)arg1 recordData:(id)arg2 isFromFav:(_Bool)arg3;
- (id)initWithMsgWrap:(id)arg1 recordData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

