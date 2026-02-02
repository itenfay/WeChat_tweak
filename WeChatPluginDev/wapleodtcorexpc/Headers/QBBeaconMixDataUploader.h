//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QBBeaconMixDataUploader : NSObject
{
    _Bool isUploading;
    NSString *uploadUrl;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading;
@property(retain) NSString *uploadUrl; // @synthesize uploadUrl;
- (void).cxx_destruct;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (_Bool)deleteUploadData:(id)arg1;
- (id)getUploadPkg:(long long)arg1 cleanData:(_Bool)arg2;
- (_Bool)doUpload;
- (void)setMaxSizeDataListener:(id)arg1;
- (id)init;

@end

