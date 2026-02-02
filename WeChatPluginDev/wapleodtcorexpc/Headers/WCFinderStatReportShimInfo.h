//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WCFinderStatReportShim;

@interface WCFinderStatReportShimInfo : NSObject
{
    _Bool _customFilter;
    id <WCFinderStatReportShim> _shim;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool customFilter; // @synthesize customFilter=_customFilter;
@property(readonly, nonatomic) __weak id <WCFinderStatReportShim> shim; // @synthesize shim=_shim;
- (void)update:(id)arg1;
- (id)initWithShim:(id)arg1;

@end

