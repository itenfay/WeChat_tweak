//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface KSGZIPHelper : NSObject
{
}

+ (int)compressDataFromSource:(struct __sFILE *)arg1 toDestination:(struct __sFILE *)arg2;
+ (id)fileHandleForWritingAtPath:(id)arg1;
+ (id)fileHandleForReadingAtPath:(id)arg1;
+ (int)compressDataFromFile:(id)arg1 toFile:(id)arg2;
+ (id)compressData:(id)arg1;
+ (int)uncompressZippedDataFromSource:(struct __sFILE *)arg1 toDestination:(struct __sFILE *)arg2;
+ (int)uncompressZippedDataFromFile:(id)arg1 toFile:(id)arg2;
+ (id)uncompressZippedData:(id)arg1;

@end

