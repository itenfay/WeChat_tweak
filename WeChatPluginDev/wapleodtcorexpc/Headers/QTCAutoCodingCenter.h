//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QTCAutoCodingCenter : NSObject
{
    NSMutableDictionary *_typeEncodingToCls;
}

+ (id)center;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *typeEncodingToCls; // @synthesize typeEncodingToCls=_typeEncodingToCls;
- (Class)classForObjcType:(id)arg1;
- (void)registerObjcTypeWrapperClass:(Class)arg1;
- (id)init;

@end

