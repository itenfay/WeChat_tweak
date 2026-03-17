//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol IWCFinderIntentDelegate;

@protocol IWCFinderIntentDelegate <NSObject>
- (NSString *)hashIntent;

@optional
- (_Bool)clearIntent;
- (_Bool)bindPreviousIntent:(id <IWCFinderIntentDelegate>)arg1;
- (id)traceValByKey:(NSString *)arg1;
- (id)getValByKey:(NSString *)arg1;
- (void)putKey:(NSString *)arg1 andVal:(id)arg2;
@end

