//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MJCaptionEntryModel : NSObject
{
    NSString *_launguage;
    NSArray *_captionItems;
}

+ (void)initialize;
+ (void)PBArrayAdd_captionItems;
+ (void)PBArrayAdd_launguage;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *captionItems; // @synthesize captionItems=_captionItems;
@property(retain, nonatomic) NSString *launguage; // @synthesize launguage=_launguage;
@property(readonly, copy) NSString *description;
- (id)toCaptionEntry;
- (id)initWithCaptionEntry:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

