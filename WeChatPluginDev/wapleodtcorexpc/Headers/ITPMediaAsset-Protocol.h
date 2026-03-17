//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, TPMediaAssetExtraParam;

@protocol ITPMediaAsset <NSObject>
@property(retain, nonatomic) TPMediaAssetExtraParam *extraParams;
@property(copy, nonatomic) NSDictionary *httpHeader;
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, nonatomic) long long mediaType;
@end

