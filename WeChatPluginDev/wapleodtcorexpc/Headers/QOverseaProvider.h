//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QOverseaProvider : NSObject
{
    NSString *_name;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)clearCache;
- (id)logoImage;
- (void)onStyleChanged:(unsigned long long)arg1;
- (id)URLForTilePath:(CDStruct_7e23819f)arg1;

@end

