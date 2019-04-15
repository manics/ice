//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

#import "IceObjcLocalObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface ICEImplicitContext: ICELocalObject
-(NSDictionary<NSString*, NSString*>*) getContext;
-(void) setContext:(NSDictionary<NSString*, NSString*>*)context;
-(bool) containsKey:(NSString*)string;
-(NSString*) get:(NSString*)key;
-(NSString*) put:(NSString*)key value:(NSString*)value;
-(NSString*) remove:(NSString*)key;
@end

#ifdef __cplusplus

@interface ICEImplicitContext()
@property (nonatomic, readonly) std::shared_ptr<Ice::ImplicitContext> implicitContext;
-(instancetype) initWithCppImplicitContext:(std::shared_ptr<Ice::ImplicitContext>)implicitContext;
@end

#endif

NS_ASSUME_NONNULL_END
