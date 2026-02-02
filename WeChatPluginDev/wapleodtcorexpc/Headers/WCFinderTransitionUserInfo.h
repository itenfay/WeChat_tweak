//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderTransitionUserInfo : NSObject
{
    _Bool _interaction;
    _Bool _isDraggingAsCard;
    _Bool _isClosureType;
    _Bool _isTransfer;
    WCFinderTransitionUserInfo *_transferInfo;
    NSString *_currentBrowseTid;
    NSMutableDictionary *_datas;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *datas; // @synthesize datas=_datas;
@property(nonatomic) _Bool isTransfer; // @synthesize isTransfer=_isTransfer;
@property(retain, nonatomic) NSString *currentBrowseTid; // @synthesize currentBrowseTid=_currentBrowseTid;
@property(nonatomic) _Bool isClosureType; // @synthesize isClosureType=_isClosureType;
@property(nonatomic) _Bool isDraggingAsCard; // @synthesize isDraggingAsCard=_isDraggingAsCard;
@property(nonatomic) _Bool interaction; // @synthesize interaction=_interaction;
@property(retain, nonatomic) WCFinderTransitionUserInfo *transferInfo; // @synthesize transferInfo=_transferInfo;
- (void)clean;
- (id)objectForKey:(id)arg1;
- (void)setObjectNoRetain:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForClass:(Class)arg1;
- (void)setObject:(id)arg1;
- (id)init;

@end

