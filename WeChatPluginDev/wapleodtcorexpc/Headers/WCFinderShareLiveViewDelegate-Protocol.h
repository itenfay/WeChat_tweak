//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "WCContentItemBaseViewDelegate-Protocol.h"

@protocol MMLiveMorphDismissTarget;

@protocol WCFinderShareLiveViewDelegate <NSObject, WCContentItemBaseViewDelegate>

@optional
- (id <MMLiveMorphDismissTarget>)getFinderLiveDismissTarget;
@end

