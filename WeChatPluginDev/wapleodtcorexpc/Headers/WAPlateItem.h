//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPlateItem : NSObject
{
    NSString *_plateStr;
}

+ (id)fromProto:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *plateStr; // @synthesize plateStr=_plateStr;
- (id)init;

@end

