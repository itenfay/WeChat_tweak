//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableData, NSMutableDictionary, NSString;

@interface FBSDKGraphRequestBody : NSObject
{
    NSMutableData *_data;
    NSMutableDictionary *_json;
    NSString *_stringBoundary;
}

- (void).cxx_destruct;
- (id)compressedData;
- (void)_appendWithKey:(id)arg1 filename:(id)arg2 contentType:(id)arg3 contentBlock:(CDUnknownBlockType)arg4;
@property(readonly, retain, nonatomic) NSData *data;
- (void)appendWithKey:(id)arg1 dataAttachmentValue:(id)arg2 logger:(id)arg3;
- (void)appendWithKey:(id)arg1 dataValue:(id)arg2 logger:(id)arg3;
- (void)appendWithKey:(id)arg1 imageValue:(id)arg2 logger:(id)arg3;
- (void)appendWithKey:(id)arg1 formValue:(id)arg2 logger:(id)arg3;
- (void)appendUTF8:(id)arg1;
- (id)mimeContentType;
- (id)init;

@end

