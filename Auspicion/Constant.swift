//  Copyright © 2015 Rob Rix. All rights reserved.

enum Constant: BooleanLiteralConvertible {
	case Boolean(Bool)
	case Integer(Int)


	// MARK: BooleanLiteralConvertible

	init(booleanLiteral: Bool) {
		self = .Boolean(booleanLiteral)
	}
}
