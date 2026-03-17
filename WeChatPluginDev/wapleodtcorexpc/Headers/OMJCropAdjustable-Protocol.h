//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol OMJCropAdjustable <NSObject>
@property(readonly, nonatomic) struct CGRect normalizedCropRect;
- (void)setNormalizedCropRect:(struct CGRect)arg1 shouldCommit:(_Bool)arg2;
@end

