//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMWeakValue : NSObject
{
    id _nonretainedObjectValue;
}

+ (id)valueWithNonretainedObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id nonretainedObjectValue; // @synthesize nonretainedObjectValue=_nonretainedObjectValue;
- (_Bool)isEqual:(id)arg1;

@end

