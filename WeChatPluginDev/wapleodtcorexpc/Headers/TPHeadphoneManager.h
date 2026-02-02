//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol ITPHeadphoneManagerImpl;

@interface TPHeadphoneManager : NSObject
{
    id <ITPHeadphoneManagerImpl> _headphoneManagerImpl;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) id <ITPHeadphoneManagerImpl> headphoneManagerImpl; // @synthesize headphoneManagerImpl=_headphoneManagerImpl;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)init;

@end

