//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderPostChatFilePickerParam : NSObject
{
    NSString *_fileType;
    NSArray *_extension;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;

@end

