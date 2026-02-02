//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface UploadMContactMsg : NSObject
{
    NSString *deviceType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType;
- (void)parseXML:(id)arg1;
- (void)dealloc;
- (id)initWithXml:(id)arg1;

@end

