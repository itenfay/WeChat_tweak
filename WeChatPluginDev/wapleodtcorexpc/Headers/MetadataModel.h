//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MetadataModel : NSObject
{
    NSString *_Project;
    NSString *_Created;
    NSString *_Description;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *Description; // @synthesize Description=_Description;
@property(copy, nonatomic) NSString *Created; // @synthesize Created=_Created;
@property(copy, nonatomic) NSString *Project; // @synthesize Project=_Project;

@end

