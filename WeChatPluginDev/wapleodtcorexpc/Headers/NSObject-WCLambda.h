//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface NSObject (WCLambda)
- (void)wc_bindLambdaObject:(id)arg1;
- (id)wc_bindLambdaObjectWithAction:(CDUnknownBlockType)arg1;
- (id)wc_allLambdaObjects;
@end
