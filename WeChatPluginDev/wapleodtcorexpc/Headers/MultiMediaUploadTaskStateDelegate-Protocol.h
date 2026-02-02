//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, FavoritesItemDataField, MultiMediaUploadBaseState;

@protocol MultiMediaUploadTaskStateDelegate <NSObject>
- (void)changeToState:(MultiMediaUploadBaseState *)arg1;
- (void)onUploadTaskProcessFailType:(int)arg1;
- (void)onUploadTaskProcessSucc;
- (void)onUploadProgressChangeWithTotal:(unsigned long long)arg1 finished:(unsigned long long)arg2;
- (_Bool)isCanCheckHitUpload;
- (void)setHadUploadData;
- (_Bool)isHadUploadData;
- (FavoritesItemDataField *)getDataField;
- (CMessageWrap *)getMessageWrap;
@end

