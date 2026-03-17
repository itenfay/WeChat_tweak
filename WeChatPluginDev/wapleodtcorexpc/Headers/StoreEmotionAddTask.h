//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol StoreEmotionAddTaskDelegate;

@interface StoreEmotionAddTask : NSObject
{
    NSString *_productID;
    id <StoreEmotionAddTaskDelegate> _delegate;
}

@property(nonatomic) __weak id <StoreEmotionAddTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (_Bool)resumeLogic;
- (id)initWithProductID:(id)arg1 andDelegate:(id)arg2;

@end

