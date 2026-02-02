//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PathInfo : NSObject
{
    NSString *_zoneName;
    NSString *_fileName;
    NSString *_typeName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;

@end

