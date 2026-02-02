//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDeviceSysFileInfo : NSObject
{
    NSString *_createDate;
    NSString *_modifyDate;
    NSString *_fileNumber;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fileNumber; // @synthesize fileNumber=_fileNumber;
@property(retain, nonatomic) NSString *modifyDate; // @synthesize modifyDate=_modifyDate;
@property(retain, nonatomic) NSString *createDate; // @synthesize createDate=_createDate;

@end

