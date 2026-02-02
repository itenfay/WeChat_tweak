//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAUpoadFileFormMultiPart : NSObject
{
    NSString *_header;
    NSString *_bodyFilePath;
    NSString *_bodyString;
    NSString *_footer;
    _Bool _isFirstPart;
    _Bool _isLastPart;
}

+ (id)finalBoundary:(id)arg1;
+ (id)middlePartBoundary:(id)arg1;
+ (id)firstPartBoundary:(id)arg1;
+ (id)boundary;
+ (id)arrayFormDatatWithMultiPart:(id)arg1 contentLength:(unsigned long long *)arg2;
+ (id)arrayFormBodyObjectWithMultiPart:(id)arg1 contentLength:(unsigned long long *)arg2;
+ (id)arrayMultiPartWithFileFieldName:(id)arg1 fileName:(id)arg2 filePath:(id)arg3 formFields:(id)arg4 boundary:(id)arg5;
+ (id)arrayFormDataWithFileFieldName:(id)arg1 fileName:(id)arg2 filePath:(id)arg3 formFields:(id)arg4 boundary:(id)arg5 contentLength:(unsigned long long *)arg6;
+ (id)arrayFormBodyObjectWithFileFieldName:(id)arg1 fileName:(id)arg2 filePath:(id)arg3 formFields:(id)arg4 boundary:(id)arg5 contentLength:(unsigned long long *)arg6;
- (void).cxx_destruct;
- (void)setFileFieldName:(id)arg1 fileName:(id)arg2 filePath:(id)arg3 boundary:(id)arg4;
- (void)setFieldName:(id)arg1 fieldValue:(id)arg2 boundary:(id)arg3;
- (void)markLastPart;
- (void)markFirstPart;
- (id)footer;
- (id)bodyString;
- (id)bodyFilePath;
- (id)header;

@end

