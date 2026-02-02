//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, NSArray, NSData, UIImage;

@interface MJMovieComposingAssetsClassifyHelper : NSObject
{
    _Bool _isCancelled;
    unsigned long long _state;
    CDUnknownBlockType _completion;
    NSData *_classifyResult;
    AVAsset *_videoAsset;
    UIImage *_imageAsset;
    NSArray *_mmAssetInfos;
    NSArray *_mjAssetInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *mjAssetInfos; // @synthesize mjAssetInfos=_mjAssetInfos;
@property(retain, nonatomic) NSArray *mmAssetInfos; // @synthesize mmAssetInfos=_mmAssetInfos;
@property(retain, nonatomic) UIImage *imageAsset; // @synthesize imageAsset=_imageAsset;
@property(retain, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(retain, nonatomic) NSData *classifyResult; // @synthesize classifyResult=_classifyResult;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property unsigned long long state; // @synthesize state=_state;
- (void)callCompletionOnSucceesWithData:(id)arg1;
- (void)callCompletionOnError:(id)arg1;
- (void)handleAssetClassifyResult:(id)arg1;
- (void)cancel;
- (void)setupTimeoutMechanismWithTimeout:(double)arg1;
- (id)getClassifyResult;
- (void)prepareClassifyResultWithMJAssetInfos:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareClassifyResultWithMMAssetInfos:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareClassifyResultWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareClassifyResultWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMJAssetInfos:(id)arg1;
- (id)initWithMMAssetInfos:(id)arg1;

@end

