//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXGUploadFileInformation : NSObject
{
    NSString *_rtxName;
    NSString *_filePath;
    NSString *_fileDescription;
}

+ (id)uploadFileInformationWithXMl:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fileDescription; // @synthesize fileDescription=_fileDescription;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *rtxName; // @synthesize rtxName=_rtxName;

@end

