//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OpenApiImageCdnUploader : NSObject
{
    CDUnknownBlockType _uploadCallback;
    NSString *_musicDataCDNMsgID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *musicDataCDNMsgID; // @synthesize musicDataCDNMsgID=_musicDataCDNMsgID;
@property(copy) CDUnknownBlockType uploadCallback; // @synthesize uploadCallback=_uploadCallback;
- (void)OnCdnUpload:(id)arg1;
- (void)onUplaodFail;
- (void)tryUploadMVImageWithData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)createMusicVideoCDNMediaInfo:(id)arg1;
- (id)transferImageDataToTargetSize:(id)arg1;

@end

