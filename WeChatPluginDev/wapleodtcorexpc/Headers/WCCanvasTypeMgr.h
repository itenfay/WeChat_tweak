//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSSet;

@interface WCCanvasTypeMgr : NSObject
{
    NSSet *_validTypeSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *validTypeSet; // @synthesize validTypeSet=_validTypeSet;
- (_Bool)hasCanvasTypeValid:(id)arg1;
- (_Bool)isScrollGroupComponentAllTypesValid:(id)arg1;
- (_Bool)checkComponentListValid:(id)arg1;
- (_Bool)isComponentTypeValid:(id)arg1;
- (_Bool)isCanvasTypesAllValid:(id)arg1;
- (void)initValidTypeSet;
- (id)init;

@end

