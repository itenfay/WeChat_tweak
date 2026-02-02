//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ServiceAuthExtBlockWrapper : NSObject
{
    CDUnknownBlockType _onOpenServiceBlock;
    CDUnknownBlockType _onCloseServiceBlock;
    CDUnknownBlockType _onCancelServiceAuthBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onCancelServiceAuthBlock; // @synthesize onCancelServiceAuthBlock=_onCancelServiceAuthBlock;
@property(copy, nonatomic) CDUnknownBlockType onCloseServiceBlock; // @synthesize onCloseServiceBlock=_onCloseServiceBlock;
@property(copy, nonatomic) CDUnknownBlockType onOpenServiceBlock; // @synthesize onOpenServiceBlock=_onOpenServiceBlock;

@end

